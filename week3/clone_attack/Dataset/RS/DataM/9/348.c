struct   sick {
    char kYMKCsw1O [(591 - 581)];
    int sGw5AXjz;
};
int main () {
    int count;
    int n;
    int i;
    int EfS9hGIV;
    count = (630 - 630);
    struct   sick XObfVhL0Ql [(387 - 287)], bvU7ayf9jF3 [100], locFhSXyIkH;
    char GYnDq6N [(576 - 573)];
    gets (GYnDq6N);
    n = atoi (GYnDq6N);
    {
        i = 407 - 407;
        while (n > i) {
            scanf ("%s %d", XObfVhL0Ql[i].kYMKCsw1O, &XObfVhL0Ql[i].sGw5AXjz);
            i++;
        };
    }
    if (n == (434 - 433))
        printf ("%s", XObfVhL0Ql[(897 - 897)].kYMKCsw1O);
    else {
        {
            i = 751 - 751;
            while (n > i) {
                if (XObfVhL0Ql[i].sGw5AXjz >= (450 - 390)) {
                    bvU7ayf9jF3[count] = XObfVhL0Ql[i];
                    count++;
                }
                i++;
            };
        }
        {
            i = 105 - 105;
            while (count - (583 - 582) > i) {
                for (EfS9hGIV = (804 - 804); EfS9hGIV < count - (464 - 463) - i; EfS9hGIV++)
                    if (bvU7ayf9jF3[EfS9hGIV].sGw5AXjz < bvU7ayf9jF3[EfS9hGIV +(772 - 771)].sGw5AXjz) {
                        locFhSXyIkH = bvU7ayf9jF3[EfS9hGIV];
                        bvU7ayf9jF3[EfS9hGIV] = bvU7ayf9jF3[EfS9hGIV +(198 - 197)];
                        bvU7ayf9jF3[EfS9hGIV +1] = locFhSXyIkH;
                    }
                i++;
            };
        }
        {
            i = 391 - 391;
            while (count > i) {
                printf ("%s\n", bvU7ayf9jF3[i].kYMKCsw1O);
                i++;
            };
        }
        {
            i = 401 - 401;
            while (i < n) {
                if (XObfVhL0Ql[i].sGw5AXjz < 60)
                    printf ("%s\n", XObfVhL0Ql[i].kYMKCsw1O);
                i++;
            };
        };
    }
    return 0;
}

