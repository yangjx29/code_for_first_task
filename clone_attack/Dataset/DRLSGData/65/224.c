int main () {
    int Z80w6VpDd1o3 [10000];
    int h3eHOAV [10000];
    int Eocf1p;
    int qUl9h5t, vmAvkhO9Gn7;
    qUl9h5t = 0;
    vmAvkhO9Gn7 = 0;
    scanf ("%d", &Eocf1p);
    for (int ANatPSQp9 = 0;
    Eocf1p > ANatPSQp9; ANatPSQp9 = ANatPSQp9 +1) {
        scanf ("%d %d\n", &Z80w6VpDd1o3[ANatPSQp9], &h3eHOAV[ANatPSQp9]);
    }
    for (int ANatPSQp9 = 0;
    Eocf1p > ANatPSQp9; ANatPSQp9 = ANatPSQp9 +1) {
        if (!(0 != Z80w6VpDd1o3[ANatPSQp9])) {
            if (h3eHOAV[ANatPSQp9] == 0) {
                qUl9h5t = qUl9h5t;
                vmAvkhO9Gn7 = vmAvkhO9Gn7;
            }
            if (!(1 != h3eHOAV[ANatPSQp9])) {
                qUl9h5t = qUl9h5t + 1;
            }
            if (!(2 != h3eHOAV[ANatPSQp9])) {
                vmAvkhO9Gn7 = vmAvkhO9Gn7 + 1;
            }
        }
        if (!(1 != Z80w6VpDd1o3[ANatPSQp9])) {
            if (h3eHOAV[ANatPSQp9] == 1) {
                qUl9h5t = qUl9h5t;
                vmAvkhO9Gn7 = vmAvkhO9Gn7;
            }
            if (!(2 != h3eHOAV[ANatPSQp9])) {
                qUl9h5t = qUl9h5t + 1;
            }
            if (h3eHOAV[ANatPSQp9] == 0) {
                vmAvkhO9Gn7++;
            }
        }
        if (Z80w6VpDd1o3[ANatPSQp9] == 2) {
            if (h3eHOAV[ANatPSQp9] == 2) {
                qUl9h5t = qUl9h5t;
                vmAvkhO9Gn7 = vmAvkhO9Gn7;
            }
            if (h3eHOAV[ANatPSQp9] == 0) {
                qUl9h5t = qUl9h5t + 1;
            }
            if (h3eHOAV[ANatPSQp9] == 1) {
                vmAvkhO9Gn7++;
            }
        }
    }
    if (qUl9h5t == vmAvkhO9Gn7) {
    }
    if (qUl9h5t > vmAvkhO9Gn7) {
    }
    if (qUl9h5t < vmAvkhO9Gn7) {
    }
    return 0;
}

