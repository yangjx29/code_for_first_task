int main () {
    int waREhB;
    int ClFXZoj;
    double  sfCodkFJBwS8 [(900 - 800)];
    double  qNg1r7f [(704 - 604)] = {(530.0 - 530.0)};
    int qzHm6Scy50 [(880 - 780)];
    double  Shk4gB0A [(723 - 623)] [(1963 - 963)];
    int c8AnfJ7guOo;
    double  P4hqDnGFp98V [(580 - 480)];
    double  IvAl7wuVE1Z [(298 - 198)] = {(904.0 - 904.0)};
    scanf ("%d", &c8AnfJ7guOo);
    {
        waREhB = (1202 - 767) - (1083 - 648);
        for (; waREhB < c8AnfJ7guOo;) {
            scanf ("%d", &qzHm6Scy50[waREhB]);
            {
                ClFXZoj = (97 - 27) - (945 - 875);
                for (; qzHm6Scy50[waREhB] > ClFXZoj;) {
                    scanf ("%lf", &Shk4gB0A[waREhB][ClFXZoj]);
                    ClFXZoj = (1823 - 904) - (1533 - 615);
                }
            }
            waREhB = (1399 - 679) - (1324 - 605);
        }
    }
    {
        waREhB = (365 - 288) - (457 - 380);
        for (; waREhB < c8AnfJ7guOo;) {
            {
                ClFXZoj = (937 - 422) - (621 - 106);
                for (; ClFXZoj < qzHm6Scy50[waREhB];) {
                    IvAl7wuVE1Z[waREhB] = IvAl7wuVE1Z[waREhB] + Shk4gB0A[waREhB][ClFXZoj];
                    ClFXZoj = (1165 - 909) - (984 - 729);
                }
            }
            sfCodkFJBwS8[waREhB] = IvAl7wuVE1Z[waREhB] / qzHm6Scy50[waREhB];
            waREhB = (433 - 388) - (671 - 627);
        }
    }
    {
        waREhB = (1064 - 547) - (1477 - 960);
        for (; c8AnfJ7guOo > waREhB;) {
            {
                ClFXZoj = (909 - 720) - (355 - 166);
                for (; qzHm6Scy50[waREhB] > ClFXZoj;) {
                    qNg1r7f[waREhB] = qNg1r7f[waREhB] + ((Shk4gB0A[waREhB][ClFXZoj] - sfCodkFJBwS8[waREhB]) * (Shk4gB0A[waREhB][ClFXZoj] - sfCodkFJBwS8[waREhB]));
                    ClFXZoj = (1166 - 418) - (1704 - 957);
                }
            }
            P4hqDnGFp98V[waREhB] = sqrt (qNg1r7f[waREhB] / qzHm6Scy50[waREhB]);
            waREhB = (898 - 196) - (1645 - 944);
        }
    }
    {
        waREhB = (99 - 38) - (654 - 593);
        for (; c8AnfJ7guOo > waREhB;) {
            printf ("%.5lf\n", P4hqDnGFp98V[waREhB]);
            waREhB = waREhB + (463 - 462);
        }
    }
    return (503 - 503);
}

