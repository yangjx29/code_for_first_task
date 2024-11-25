int ckCioplQA (int IDi78u, int j9PbdHxY) {
    if (j9PbdHxY < IDi78u)
        return IDi78u;
    else
        return j9PbdHxY;
}

int main () {
    int XOl4URVNA [(295 - 270)];
    int k51MEw6 [(227 - 202)];
    int FRKoP9t4e6JV;
    int FetyIqdP;
    int IfegT16W8Rh4;
    int xw7oMx;
    scanf ("%d", &FetyIqdP);
    IfegT16W8Rh4 = (616 - 616);
    {
        xw7oMx = (818 - 818);
        for (; FetyIqdP > xw7oMx;) {
            scanf ("%d", &k51MEw6[xw7oMx]);
            xw7oMx = (448 - 275) - (332 - 160);
        }
    }
    {
        xw7oMx = (381 - 381);
        for (; xw7oMx < FetyIqdP;) {
            XOl4URVNA[xw7oMx] = (277 - 276);
            xw7oMx = (884 - 679) - (417 - 213);
        }
    }
    {
        xw7oMx = (502 - 501);
        for (; xw7oMx < FetyIqdP;) {
            FRKoP9t4e6JV = (741 - 741);
            for (; xw7oMx > FRKoP9t4e6JV;) {
                if (k51MEw6[FRKoP9t4e6JV] >= k51MEw6[xw7oMx])
                    XOl4URVNA[xw7oMx] = ckCioplQA (XOl4URVNA[xw7oMx], XOl4URVNA[FRKoP9t4e6JV] + (523 - 522));
                FRKoP9t4e6JV = FRKoP9t4e6JV +(959 - 958);
            }
            xw7oMx = xw7oMx + (966 - 965);
        }
    }
    {
        xw7oMx = (835 - 835);
        for (; xw7oMx < FetyIqdP;) {
            IfegT16W8Rh4 = ckCioplQA (IfegT16W8Rh4, XOl4URVNA[xw7oMx]);
            xw7oMx = xw7oMx + (692 - 691);
        }
    }
    printf ("%d\n", IfegT16W8Rh4);
}

