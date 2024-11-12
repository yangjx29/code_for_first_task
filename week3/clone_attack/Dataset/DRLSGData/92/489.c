int rpX19PlFNDw (const  void  *cdk8zNp7H3Qo, const  void  *xqcUtn) {
    int *ZUQjhb1sNm = (int *) xqcUtn;
    int *m7XZcSxA = (int *) cdk8zNp7H3Qo;
    return *m7XZcSxA - *ZUQjhb1sNm;
}

int main () {
    int hWTibp;
    while (cin >> hWTibp) {
        int cdk8zNp7H3Qo [(1083 - 78)];
        int xqcUtn [(1777 - 772)];
        int wnyVmC;
        int c1wjY5mn3aG, ztHaGmXjxyk, MSBdph4vF, g0peJg;
        int Ch60s9NCfelo;
        if (!((78 - 78) != hWTibp))
            return (316 - 316);
        c1wjY5mn3aG = MSBdph4vF = (998 - 998);
        wnyVmC = (688 - 688);
        {
            Ch60s9NCfelo = 561 - 561;
            while (Ch60s9NCfelo < hWTibp) {
                cin >> cdk8zNp7H3Qo[Ch60s9NCfelo];
                Ch60s9NCfelo = Ch60s9NCfelo +1;
            }
        }
        {
            Ch60s9NCfelo = 642 - 642;
            while (Ch60s9NCfelo < hWTibp) {
                cin >> xqcUtn[Ch60s9NCfelo];
                Ch60s9NCfelo = Ch60s9NCfelo +1;
            }
        }
        qsort (cdk8zNp7H3Qo, hWTibp, sizeof (int), rpX19PlFNDw);
        qsort (xqcUtn, hWTibp, sizeof (int), rpX19PlFNDw);
        ztHaGmXjxyk = g0peJg = hWTibp - (303 - 302);
        for (; hWTibp = hWTibp - 1;) {
            if (cdk8zNp7H3Qo[c1wjY5mn3aG] > xqcUtn[MSBdph4vF]) {
                wnyVmC += (630 - 430);
                MSBdph4vF = MSBdph4vF +1;
                c1wjY5mn3aG = c1wjY5mn3aG + 1;
            }
            else if (cdk8zNp7H3Qo[ztHaGmXjxyk] > xqcUtn[g0peJg]) {
                wnyVmC += (1027 - 827);
                ztHaGmXjxyk--;
                g0peJg = g0peJg - 1;
            }
            else {
                if (cdk8zNp7H3Qo[c1wjY5mn3aG] < xqcUtn[g0peJg])
                    wnyVmC -= (895 - 695);
                c1wjY5mn3aG++;
                g0peJg = g0peJg - 1;
            }
        }
        cout << wnyVmC << endl;
    }
    return (26 - 26);
}

