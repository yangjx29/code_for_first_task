struct   RkIK6vMJcOh {
    int CFUCA5g;
    int BPm6hNDJ;
    int yJRqrvo1Xlmp;
    int TbJdSLjNi;
}
RkIK6vMJcOh [(100607 - 607)];

int main () {
    int g65ceYRF;
    int nLxfU6R;
    int iexHvCun0Ni;
    int sNszoD39rc;
    int lmhBjEsRWd;
    scanf ("%d", &iexHvCun0Ni);
    {
        sNszoD39rc = (722 - 722);
        for (; iexHvCun0Ni > sNszoD39rc;) {
            scanf ("%d %d %d", &RkIK6vMJcOh[sNszoD39rc].CFUCA5g, &RkIK6vMJcOh[sNszoD39rc].BPm6hNDJ, &RkIK6vMJcOh[sNszoD39rc].yJRqrvo1Xlmp);
            RkIK6vMJcOh[sNszoD39rc].TbJdSLjNi = RkIK6vMJcOh[sNszoD39rc].BPm6hNDJ + RkIK6vMJcOh[sNszoD39rc].yJRqrvo1Xlmp;
            sNszoD39rc++;
        }
    }
    lmhBjEsRWd = (60 - 60);
    {
        sNszoD39rc = 0;
        for (; sNszoD39rc < iexHvCun0Ni;) {
            g65ceYRF = RkIK6vMJcOh[0].TbJdSLjNi;
            {
                nLxfU6R = iexHvCun0Ni - 1;
                for (; nLxfU6R > 0;) {
                    g65ceYRF = g65ceYRF < RkIK6vMJcOh[nLxfU6R].TbJdSLjNi ? RkIK6vMJcOh[nLxfU6R].TbJdSLjNi : g65ceYRF;
                    nLxfU6R--;
                }
            }
            {
                nLxfU6R = 0;
                for (; nLxfU6R < iexHvCun0Ni;) {
                    if (RkIK6vMJcOh[nLxfU6R].TbJdSLjNi == g65ceYRF) {
                        lmhBjEsRWd = lmhBjEsRWd + 1;
                        if (lmhBjEsRWd == (316 - 313)) {
                            goto guiyi;
                        }
                        printf ("%d %d\n", RkIK6vMJcOh[nLxfU6R].CFUCA5g, RkIK6vMJcOh[nLxfU6R].TbJdSLjNi);
                        RkIK6vMJcOh[nLxfU6R].TbJdSLjNi = 0;
                    }
                    nLxfU6R++;
                }
            }
            sNszoD39rc++;
        }
    }
guiyi :
    return 0;
}

