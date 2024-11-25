int main () {
    int xAvM6H4YzIw, wlG5EkB, w6fSCI, WTy0stHlg8ze;
    scanf ("%d %d", &xAvM6H4YzIw, &wlG5EkB);
    int fn0ys7 [(762 - 751)] [(204 - 193)] = {(925 - 925)};
    int iwI3kZl7YO [(275 - 264)] [(383 - 372)] = {(112 - 112)};
    fn0ys7[(189 - 184)][(272 - 267)] = xAvM6H4YzIw;
    iwI3kZl7YO[(219 - 214)][(559 - 554)] = xAvM6H4YzIw;
    while (wlG5EkB > (988 - 988)) {
        {
            w6fSCI = (769 - 768);
            while (w6fSCI <= (970 - 961)) {
                for (WTy0stHlg8ze = (869 - 868); WTy0stHlg8ze <= (337 - 328); WTy0stHlg8ze = WTy0stHlg8ze +1) {
                    if (fn0ys7[w6fSCI][WTy0stHlg8ze] != (514 - 514)) {
                        iwI3kZl7YO[w6fSCI][WTy0stHlg8ze] = iwI3kZl7YO[w6fSCI][WTy0stHlg8ze] + fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI - (150 - 149)][WTy0stHlg8ze] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI - (570 - 569)][WTy0stHlg8ze -(101 - 100)] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI - (296 - 295)][WTy0stHlg8ze +(839 - 838)] = iwI3kZl7YO[w6fSCI - (296 - 295)][WTy0stHlg8ze +(839 - 838)] + fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI][WTy0stHlg8ze -(12 - 11)] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI][WTy0stHlg8ze +(616 - 615)] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI + (924 - 923)][WTy0stHlg8ze] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI + (603 - 602)][WTy0stHlg8ze -(77 - 76)] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                        iwI3kZl7YO[w6fSCI + (454 - 453)][WTy0stHlg8ze +(930 - 929)] += fn0ys7[w6fSCI][WTy0stHlg8ze];
                    }
                }
                w6fSCI = w6fSCI + 1;
            }
        }
        for (w6fSCI = (86 - 85); w6fSCI <= (254 - 245); w6fSCI = w6fSCI + 1) {
            WTy0stHlg8ze = (704 - 703);
            while (WTy0stHlg8ze <= (782 - 773)) {
                fn0ys7[w6fSCI][WTy0stHlg8ze] = iwI3kZl7YO[w6fSCI][WTy0stHlg8ze];
                WTy0stHlg8ze = WTy0stHlg8ze +1;
            }
        }
        wlG5EkB = wlG5EkB - 1;
    }
    for (w6fSCI = (648 - 647); w6fSCI <= (937 - 928); w6fSCI = w6fSCI + 1) {
        WTy0stHlg8ze = (857 - 856);
        while (WTy0stHlg8ze <= (972 - 963)) {
            if (WTy0stHlg8ze != (270 - 261)) {
                printf ("%d ", fn0ys7[w6fSCI][WTy0stHlg8ze]);
            }
            else {
                printf ("%d\n", fn0ys7[w6fSCI][WTy0stHlg8ze]);
            }
            WTy0stHlg8ze++;
        }
    }
    return (894 - 894);
}

