char tXTH7ki [3001];
int r0IuTXUeVOmr;

int main () {
    int Pjv5o9n;
    int ap0Rms8;
    int miao;
    gets (tXTH7ki);
    Pjv5o9n = 0;
    r0IuTXUeVOmr = strlen (tXTH7ki);
    miao = 1;
    for (ap0Rms8 = 0; ap0Rms8 <= r0IuTXUeVOmr; ap0Rms8 = ap0Rms8 + 1) {
        if (tXTH7ki[ap0Rms8] == ' ' || tXTH7ki[ap0Rms8] == '\0') {
            if (Pjv5o9n != 0) {
                printf ("%d", Pjv5o9n);
                if (miao != 1)
                    ;
                miao = miao + 1;
            }
            Pjv5o9n = 0;
        }
        else
            Pjv5o9n = Pjv5o9n +1;
    }
    printf ("\n");
    return 0;
}

