struct   dian {
    int a;
    int b;
    int c;
}
k8aLK3fVp [10];
struct   len {
    int s;
    int m;
    double  dis;
}
q [45];

int main () {
    double  temp3;
    int count;
    int n;
    int i;
    int j;
    int k;
    int temp1;
    int temp2;
    count = -(927 - 926);
    cin >> n;
    for (i = (552 - 552); i < n; i++)
        cin >> k8aLK3fVp[i].a >> k8aLK3fVp[i].b >> k8aLK3fVp[i].c;
    for (j = 0; j < n - (754 - 753); j = j + 1) {
        for (k = j + (302 - 301); k < n; k++) {
            count = count + 1;
            q[count].dis = sqrt ((k8aLK3fVp[j].a - k8aLK3fVp[k].a) * (k8aLK3fVp[j].a - k8aLK3fVp[k].a) + (k8aLK3fVp[j].b - k8aLK3fVp[k].b) * (k8aLK3fVp[j].b - k8aLK3fVp[k].b) + (k8aLK3fVp[j].c - k8aLK3fVp[k].c) * (k8aLK3fVp[j].c - k8aLK3fVp[k].c));
            q[count].s = j;
            q[count].m = k;
        };
    }
    {
        i = 0;
        while (i < count) {
            for (j = count - 1; j >= i; j = j - 1) {
                if (q[j].dis < q[j + 1].dis) {
                    temp1 = q[j].s;
                    temp2 = q[j].m;
                    temp3 = q[j].dis;
                    q[j].s = q[j + 1].s;
                    q[j].m = q[j + 1].m;
                    q[j].dis = q[j + 1].dis;
                    q[j + 1].s = temp1;
                    q[j + 1].m = temp2;
                    q[j + 1].dis = temp3;
                };
            }
            i++;
        };
    }
    for (i = 0; i <= count; i++)
        cout << "(" << k8aLK3fVp[q[i].s].a << "," << k8aLK3fVp[q[i].s].b << "," << k8aLK3fVp[q[i].s].c << ")" << "-" << "(" << k8aLK3fVp[q[i].m].a << "," << k8aLK3fVp[q[i].m].b << "," << k8aLK3fVp[q[i].m].c << ")" << "=" << setprecision (2) << fixed << q[i].dis << endl;
    return 0;
}

