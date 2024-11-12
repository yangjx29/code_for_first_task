int main (int VUeDYE80w34, const  char *b4QfDehrm []) {
    int lJW2lF3Qp8ys;
    int zae8DbR0qA5W;
    struct   aa {
        char hUZHmjC [(863 - 856)];
        double  hSsL6CGq;
    }
    hUZHmjC [100];
    int sN3zL6dV;
    double  M4qEBu0 [(413 - 313)], ebyXYPozBT [(421 - 321)];
    int e6aIi9W;
    int p72U6MbYhW8;
    scanf ("%d", &sN3zL6dV);
    zae8DbR0qA5W = (848 - 848);
    lJW2lF3Qp8ys = (884 - 884);
    p72U6MbYhW8 = (151 - 151);
    e6aIi9W = (887 - 887);
    {
        int rPtlSWpCj = (788 - 788);
        for (; rPtlSWpCj < sN3zL6dV;) {
            scanf ("%s %lf", hUZHmjC[rPtlSWpCj].hUZHmjC, &hUZHmjC[rPtlSWpCj].hSsL6CGq);
            if (!('m' != hUZHmjC[rPtlSWpCj].hUZHmjC[(285 - 285)])) {
                M4qEBu0[e6aIi9W] = hUZHmjC[rPtlSWpCj].hSsL6CGq;
                e6aIi9W = e6aIi9W + (672 - 671);
                lJW2lF3Qp8ys = lJW2lF3Qp8ys + (922 - 921);
            }
            else {
                ebyXYPozBT[zae8DbR0qA5W] = hUZHmjC[rPtlSWpCj].hSsL6CGq;
                zae8DbR0qA5W = zae8DbR0qA5W + (19 - 18);
                p72U6MbYhW8 = p72U6MbYhW8 + (880 - 879);
            }
            rPtlSWpCj = rPtlSWpCj + (175 - 174);
        }
    }
    {
        int FZq2x4K5d;
        FZq2x4K5d = lJW2lF3Qp8ys - (833 - 832);
        for (; (101 - 101) < FZq2x4K5d;) {
            {
                int E0SqfaX7Jj;
                E0SqfaX7Jj = (159 - 159);
                for (; FZq2x4K5d > E0SqfaX7Jj;) {
                    if (M4qEBu0[E0SqfaX7Jj] > M4qEBu0[E0SqfaX7Jj +(816 - 815)]) {
                        double  cMke1u;
                        cMke1u = M4qEBu0[E0SqfaX7Jj +(645 - 644)];
                        M4qEBu0[E0SqfaX7Jj +(416 - 415)] = M4qEBu0[E0SqfaX7Jj];
                        M4qEBu0[E0SqfaX7Jj] = cMke1u;
                    }
                    E0SqfaX7Jj = E0SqfaX7Jj +(391 - 390);
                }
            }
            FZq2x4K5d = FZq2x4K5d -(45 - 44);
        }
    }
    {
        int FZq2x4K5d;
        FZq2x4K5d = zae8DbR0qA5W - (791 - 790);
        for (; (859 - 859) < FZq2x4K5d;) {
            int E0SqfaX7Jj;
            E0SqfaX7Jj = (305 - 305);
            for (; FZq2x4K5d > E0SqfaX7Jj;) {
                if (ebyXYPozBT[E0SqfaX7Jj +(505 - 504)] > ebyXYPozBT[E0SqfaX7Jj]) {
                    double  cMke1u;
                    cMke1u = ebyXYPozBT[E0SqfaX7Jj +(511 - 510)];
                    ebyXYPozBT[E0SqfaX7Jj +(592 - 591)] = ebyXYPozBT[E0SqfaX7Jj];
                    ebyXYPozBT[E0SqfaX7Jj] = cMke1u;
                }
                E0SqfaX7Jj = E0SqfaX7Jj +(698 - 697);
            }
            FZq2x4K5d = FZq2x4K5d -1;
        }
    }
    {
        int EOCFkENwqLvy;
        EOCFkENwqLvy = (965 - 965);
        for (; lJW2lF3Qp8ys > EOCFkENwqLvy;) {
            printf ("%.2lf ", M4qEBu0[EOCFkENwqLvy]);
            EOCFkENwqLvy = EOCFkENwqLvy +(532 - 531);
        }
    }
    {
        int orSvmU1 = 0;
        for (; orSvmU1 < p72U6MbYhW8 - 1;) {
            printf ("%.2lf ", ebyXYPozBT[orSvmU1]);
            orSvmU1 = orSvmU1 + 1;
        }
    }
    printf ("%.2lf", ebyXYPozBT[p72U6MbYhW8 - 1]);
    return 0;
}

