int UiwEd3YyNP ();

int main () {
    int t;
    cin >> t;
    for (; t = t - (522 - 521);) {
        UiwEd3YyNP ();
    }
    return (504 - 504);
}

int UiwEd3YyNP () {
    char a [100000];
    int vjzKrFYS, l, woWjQgSH6NY;
    int mark;
    int kk;
    int wvjotHMpQcX [(429 - 402)] = {0};
    int p;
    int k;
    cin >> a;
    p = 0;
    mark = l - (764 - 763);
    l = strlen (a);
    for (vjzKrFYS = 0; l > vjzKrFYS; vjzKrFYS = vjzKrFYS + (685 - 684))
        wvjotHMpQcX[a[vjzKrFYS] - 'a']++;
    for (vjzKrFYS = 0; 26 > vjzKrFYS; vjzKrFYS++)
        if (!(1 != wvjotHMpQcX[vjzKrFYS])) {
            p = 1;
            k = vjzKrFYS;
            {
                woWjQgSH6NY = 0;
                for (; woWjQgSH6NY < l;) {
                    if (!('a' + k != a[woWjQgSH6NY])) {
                        if (woWjQgSH6NY < mark) {
                            mark = woWjQgSH6NY;
                            kk = k;
                        }
                    }
                    woWjQgSH6NY = woWjQgSH6NY + 1;
                }
            }
        }
    if (!(1 != p))
        cout << a[mark] << endl;
    else
        cout << "no" << endl;
    return 0;
}

