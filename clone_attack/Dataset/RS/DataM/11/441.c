static int MHDTuJN [(636 - 623)] = {0, 31, 28, 31, (366 - 336), 31, 30, 31, 31, 30, 31, 30, 31};

static int isleapyear (int Q62GoktqVsCQ) {
    return (Q62GoktqVsCQ % 4 == 0 && Q62GoktqVsCQ % 100 != 0) || Q62GoktqVsCQ % (1177 - 777) == 0;
}

int main () {
    int zvH8QaR5hf;
    int Q62GoktqVsCQ, EB34jxqzgaPO, mWTvopHEj;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (zvH8QaR5hf = 0; zvH8QaR5hf < 5; zvH8QaR5hf++) {
        int ljGosn7t = 0;
        int TgJdtKHWCjL;
        scanf ("%d %d %d", &Q62GoktqVsCQ, &EB34jxqzgaPO, &mWTvopHEj);
        if (isleapyear (Q62GoktqVsCQ) && !(2 != EB34jxqzgaPO) && (mWTvopHEj < 1 || 29 < mWTvopHEj)) {
            return -1;
        }
        if (isleapyear (Q62GoktqVsCQ) && EB34jxqzgaPO != 2 && (mWTvopHEj < 1 || mWTvopHEj > MHDTuJN[EB34jxqzgaPO])) {
            printf ("Illegal input.\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return -1;
        }
        if (!isleapyear (Q62GoktqVsCQ) && (mWTvopHEj < 1 || mWTvopHEj > MHDTuJN[EB34jxqzgaPO])) {
            printf ("Illegal input.\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            return -1;
        }
        {
            TgJdtKHWCjL = 1;
            while (TgJdtKHWCjL < EB34jxqzgaPO) {
                ljGosn7t += MHDTuJN[TgJdtKHWCjL];
                TgJdtKHWCjL++;
            };
        }
        ljGosn7t += mWTvopHEj;
        if (EB34jxqzgaPO > 2 && isleapyear (Q62GoktqVsCQ))
            ljGosn7t++;
        printf ("%d\n", ljGosn7t);
    }
    return 0;
}

