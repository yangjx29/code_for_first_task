struct   jisuan {
    char BkgBrFXoUyY9;
    int JCesSMKgVhk;
}
qbJS0c9pvL [(1926 - 926)];

int v4CgAP9YmnKi (char kMHwST) {
    if ('a' <= kMHwST && 'z' >= kMHwST)
        return kMHwST - 32;
    else
        return kMHwST;
}

int main () {
    int i, CYJS0OB, ol4BCuWQx9A;
    char str [1001];
    cin >> str;
    CYJS0OB = strlen (str);
    str[(593 - 593)] = v4CgAP9YmnKi (str[(368 - 368)]);
    qbJS0c9pvL[(302 - 302)].BkgBrFXoUyY9 = str[0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    qbJS0c9pvL[0].JCesSMKgVhk = 1;
    ol4BCuWQx9A = 0;
    {
        i = 1;
        while (CYJS0OB > i) {
            str[i] = v4CgAP9YmnKi (str[i]);
            if (str[i] == str[i - 1])
                qbJS0c9pvL[ol4BCuWQx9A].JCesSMKgVhk++;
            else {
                ol4BCuWQx9A = ol4BCuWQx9A + 1;
                qbJS0c9pvL[ol4BCuWQx9A].BkgBrFXoUyY9 = str[i];
                qbJS0c9pvL[ol4BCuWQx9A].JCesSMKgVhk = 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= ol4BCuWQx9A) {
            cout << "(" << qbJS0c9pvL[i].BkgBrFXoUyY9 << "," << qbJS0c9pvL[i].JCesSMKgVhk << ")";
            i = i + 1;
        };
    }
    return 0;
}

