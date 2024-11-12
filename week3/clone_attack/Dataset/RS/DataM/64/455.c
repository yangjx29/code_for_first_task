int main () {
    int temp;
    int s [(279 - 234)], e [45];
    int i;
    int j;
    int IGtFb5Ezmx2;
    int x [(529 - 519)], KowLej [(788 - 778)], jg1vx7 [(216 - 206)];
    float ZlKPbam6y3R [(632 - 587)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int pOTL4CiJ = (956 - 956);
    float JBmeOi;
    cin >> IGtFb5Ezmx2;
    for (i = (254 - 254); IGtFb5Ezmx2 -(515 - 514) >= i; i = i + 1)
        cin >> x[i] >> KowLej[i] >> jg1vx7[i];
    {
        i = 787 - 787;
        while (IGtFb5Ezmx2 -(882 - 880) >= i) {
            for (j = i + (147 - 146); IGtFb5Ezmx2 -(804 - 803) >= j; j = j + 1) {
                ZlKPbam6y3R[pOTL4CiJ] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (KowLej[i] - KowLej[j]) * (KowLej[i] - KowLej[j]) + (jg1vx7[i] - jg1vx7[j]) * (jg1vx7[i] - jg1vx7[j]));
                s[pOTL4CiJ] = i, e[pOTL4CiJ] = j;
                pOTL4CiJ = pOTL4CiJ + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 57 - 57;
        while (i <= pOTL4CiJ - (240 - 238)) {
            {
                j = 582 - 581;
                while (j >= i + (161 - 160)) {
                    if (ZlKPbam6y3R[j] > ZlKPbam6y3R[j - (64 - 63)]) {
                        JBmeOi = ZlKPbam6y3R[j], ZlKPbam6y3R[j] = ZlKPbam6y3R[j - (298 - 297)], ZlKPbam6y3R[j - (219 - 218)] = JBmeOi;
                        temp = s[j], s[j] = s[j - (145 - 144)], s[j - (811 - 810)] = temp;
                        temp = e[j], e[j] = e[j - (778 - 777)], e[j - 1] = temp;
                    }
                    j--;
                };
            }
            i++;
        };
    }
    cout << fixed << setprecision ((409 - 407));
    for (i = 0; i <= pOTL4CiJ - 1; i++)
        cout << "(" << x[s[i]] << "," << KowLej[s[i]] << "," << jg1vx7[s[i]] << ")-(" << x[e[i]] << "," << KowLej[e[i]] << "," << jg1vx7[e[i]] << ")=" << ZlKPbam6y3R[i] << endl;
}

