int gUev1H (int o1tlgH5yIdM, int r9E7IXaC) {
    if (o1tlgH5yIdM >= (402 - 402) && o1tlgH5yIdM <= (81 - 77) && r9E7IXaC >= (541 - 541) && r9E7IXaC <= 4) {
        return (251 - 250);
    }
    else {
        return (911 - 911);
    }
}

int main () {
    int YbVunsY8S16R;
    int vlrTfw2p [(416 - 411)] [(968 - 963)];
    int A9jXKSu [(538 - 533)];
    int gtyJpfUGdB42;
    int OgeC3vfn9Om;
    int o1tlgH5yIdM;
    int r9E7IXaC;
    for (OgeC3vfn9Om = (47 - 47); OgeC3vfn9Om < (957 - 952); OgeC3vfn9Om++) {
        for (YbVunsY8S16R = (88 - 88); YbVunsY8S16R < (576 - 571); YbVunsY8S16R++) {
            scanf ("%d", &vlrTfw2p[OgeC3vfn9Om][YbVunsY8S16R]);
        }
    }
    scanf ("%d%d", &o1tlgH5yIdM, &r9E7IXaC);
    gtyJpfUGdB42 = gUev1H (o1tlgH5yIdM, r9E7IXaC);
    if (gtyJpfUGdB42 == (798 - 797)) {
        {
            YbVunsY8S16R = 0;
            for (; YbVunsY8S16R < 5;) {
                A9jXKSu[YbVunsY8S16R] = vlrTfw2p[o1tlgH5yIdM][YbVunsY8S16R];
                vlrTfw2p[o1tlgH5yIdM][YbVunsY8S16R] = vlrTfw2p[r9E7IXaC][YbVunsY8S16R];
                vlrTfw2p[r9E7IXaC][YbVunsY8S16R] = A9jXKSu[YbVunsY8S16R];
                YbVunsY8S16R++;
            }
        }
        for (OgeC3vfn9Om = 0; OgeC3vfn9Om < 5; OgeC3vfn9Om++) {
            for (YbVunsY8S16R = 0; YbVunsY8S16R < 5; YbVunsY8S16R++) {
                if (YbVunsY8S16R < 4) {
                    printf ("%d ", vlrTfw2p[OgeC3vfn9Om][YbVunsY8S16R]);
                }
                else {
                    printf ("%d\n", vlrTfw2p[OgeC3vfn9Om][YbVunsY8S16R]);
                }
            }
        }
    }
    else {
    }
    return 0;
}

