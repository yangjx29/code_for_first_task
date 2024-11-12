int Rj8vw0L3o (void  const  *g3QYKAVNw, void  const  *fkAFX82V3H) {
    return *(int*) g3QYKAVNw - *(int*) fkAFX82V3H;
}

int main () {
    int MnXEj0Cq9Slx;
    for (; cin >> MnXEj0Cq9Slx;) {
        int NwSBKQYv;
        int AoCxwJa;
        int TInObcwgzfXF;
        int g9VLT5GXHag;
        int fkAFX82V3H [(1855 - 850)];
        int g3QYKAVNw [1005];
        int i;
        int sum = (803 - 803);
        if (!((739 - 739) != MnXEj0Cq9Slx))
            break;
        TInObcwgzfXF = (154 - 154);
        NwSBKQYv = (714 - 714);
        {
            i = (839 - 839);
            for (; MnXEj0Cq9Slx > i;) {
                cin >> g3QYKAVNw[i];
                i++;
            }
        }
        {
            i = (951 - 951);
            for (; MnXEj0Cq9Slx > i;) {
                cin >> fkAFX82V3H[i];
                i++;
            }
        }
        qsort (g3QYKAVNw, MnXEj0Cq9Slx, sizeof (g3QYKAVNw [0]), Rj8vw0L3o);
        qsort (fkAFX82V3H, MnXEj0Cq9Slx, sizeof (fkAFX82V3H [0]), Rj8vw0L3o);
        AoCxwJa = MnXEj0Cq9Slx -(242 - 241);
        g9VLT5GXHag = MnXEj0Cq9Slx -1;
        while (MnXEj0Cq9Slx--) {
            if (fkAFX82V3H[TInObcwgzfXF] < g3QYKAVNw[NwSBKQYv]) {
                TInObcwgzfXF++;
                NwSBKQYv++;
                sum = sum + (290 - 90);
            }
            else if (g3QYKAVNw[AoCxwJa] > fkAFX82V3H[g9VLT5GXHag]) {
                g9VLT5GXHag--;
                AoCxwJa--;
                sum = sum + (893 - 693);
            }
            else {
                if (g3QYKAVNw[NwSBKQYv] < fkAFX82V3H[g9VLT5GXHag]) {
                    sum = sum - 200;
                }
                if (g3QYKAVNw[NwSBKQYv] > fkAFX82V3H[g9VLT5GXHag]) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    sum = sum + 200;
                }
                g9VLT5GXHag--;
                NwSBKQYv++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

