
// 문제

// 널리 잘 알려진 자료구조 중 최소 힙이 있다. 최소 힙을 이용하여 다음과 같은 연산을 지원하는 프로그램을 작성하시오.

//     배열에 자연수 x를 넣는다.
//     배열에서 가장 작은 값을 출력하고, 그 값을 배열에서 제거한다.

// 프로그램은 처음에 비어있는 배열에서 시작하게 된다.
// 입력

// 첫째 줄에 연산의 개수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 N개의 줄에는 연산에 대한 정보를 나타내는 정수 x가 주어진다. 만약 x가 자연수라면 배열에 x라는 값을 넣는(추가하는) 연산이고, x가 0이라면 배열에서 가장 작은 값을 출력하고 그 값을 배열에서 제거하는 경우이다. x는 231보다 작은 자연수 또는 0이고, 음의 정수는 입력으로 주어지지 않는다.
// 출력

// 입력에서 0이 주어진 횟수만큼 답을 출력한다. 만약 배열이 비어 있는 경우인데 가장 작은 값을 출력하라고 한 경우에는 0을 출력하면 된다.


#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100001

int min_heap[MAX_SIZE];     // 최소 힙을 위한 배열
int heap_size = 0;          // 초기 힙의 크기

// 두 요소의 값을 바꾸는 함수
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void push(int value) {
    if (heap_size + 1 >= MAX_SIZE) {
        return;                             // 힙이 꽉 참
    }
    min_heap[heap_size] = value;
    int current = heap_size;
    int parent = (current - 1) / 2;
    while (current > 0 && min_heap[current] < min_heap[parent]) {
        swap(&min_heap[current], &min_heap[parent]);
        current = parent;
        parent = (current - 1) / 2;
    }
    heap_size++;
}

int pop() {
    if (heap_size <= 0) {
        return 0;                           // 힙이 비어있음
    }
    int result = min_heap[0];
    heap_size--;
    min_heap[0] = min_heap[heap_size];

    int current = 0;
    while (true) {
        int leftChild = current * 2 + 1;
        int rightChild = current * 2 + 2;
        int smallest = current;

        if (leftChild < heap_size && min_heap[leftChild] < min_heap[smallest]) {
            smallest = leftChild;
        }
        if (rightChild < heap_size && min_heap[rightChild] < min_heap[smallest]) {
            smallest = rightChild;
        }
        if (smallest == current) {
            break;
        }
        swap(&min_heap[current], &min_heap[smallest]);
        current = smallest;
    }
    return result;
}

int main() {
    int N, x;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x == 0) {
            printf("%d\n", pop());
        } else {
            push(x);
        }
    }
    return 0;
}
