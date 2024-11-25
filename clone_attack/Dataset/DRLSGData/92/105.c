int cmp (const  void  *H2xp7CFN8hai, const  void  *dvUZqfGnJy) {
    return *((int *) dvUZqfGnJy) - *((int *) H2xp7CFN8hai);
}

int main () {
    int v2ZStnK7Q;
    int MVmNZl [(1925 - 925)];
    int EuxJhP [(1174 - 174)];
    int rf61m2oxqwUa;
    int JfNqKA64mYS;
    int vYxZsToLN;
    int s;
    int t;
    int xD7sFLCbBx;
    while (scanf ("%d", &v2ZStnK7Q) && v2ZStnK7Q) {
        {
            rf61m2oxqwUa = 793 - 793;
            while (v2ZStnK7Q > rf61m2oxqwUa) {
                scanf ("%d", &EuxJhP[rf61m2oxqwUa]);
                ++rf61m2oxqwUa;
            }
        }
        qsort (EuxJhP, v2ZStnK7Q, sizeof (int), cmp);
        {
            rf61m2oxqwUa = (228 - 228);
            while (rf61m2oxqwUa < v2ZStnK7Q) {
                scanf ("%d", &MVmNZl[rf61m2oxqwUa]);
                ++rf61m2oxqwUa;
            }
        }
        qsort (MVmNZl, v2ZStnK7Q, sizeof (int), cmp);
        JfNqKA64mYS = s = v2ZStnK7Q - (923 - 922);
        rf61m2oxqwUa = vYxZsToLN = (792 - 792);
        xD7sFLCbBx = (783 - 783);
        {
            t = (992 - 992);
            while (v2ZStnK7Q > t) {
                if (MVmNZl[vYxZsToLN] < EuxJhP[rf61m2oxqwUa]) {
                    ++rf61m2oxqwUa;
                    ++vYxZsToLN;
                    xD7sFLCbBx += (702 - 502);
                }
                else if (MVmNZl[s] < EuxJhP[JfNqKA64mYS]) {
                    xD7sFLCbBx += (854 - 654);
                    --s;
                    --JfNqKA64mYS;
                }
                else {
                    if (EuxJhP[JfNqKA64mYS] > MVmNZl[vYxZsToLN])
                        xD7sFLCbBx += (525 - 325);
                    else if (EuxJhP[JfNqKA64mYS] < MVmNZl[vYxZsToLN])
                        xD7sFLCbBx -= (594 - 394);
                    ++vYxZsToLN;
                    --JfNqKA64mYS;
                }
                ++t;
            }
        }
        printf ("%d\n", xD7sFLCbBx);
    }
    return (883 - 883);
}

