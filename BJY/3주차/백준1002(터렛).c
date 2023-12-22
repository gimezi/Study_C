# include <stdio.h>
# include <math.h>

int main() {
    int tc,x1,y1,r1,x2,y2,r2,result;
    double d,s;
    scanf("%d", &tc);
    for (int i=0; i< tc; i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        d = sqrt(pow(x2- x1, 2) + pow(y2- y1, 2));
        if (r1 > r2)
            s = r1 - r2;
        else
            s = r2 - r1;
        if(d == 0 && r1 == r2)
            result = -1;
        else if(d < r1+ r2 && (s < d))
            result = 2;
        else if(d == r1 + r2 || d == s)
            result = 1;
        else
            result = 0;
        printf("%d\n",result);
    }
    return 0;
}