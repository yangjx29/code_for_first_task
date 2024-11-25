int WEuwMN (int jDpjkCiq, int DzcHBaiD6x);

int main () {
    int i;
    int S8OtFBEaoc, REWuF7T, BQgxl5UTzYj, SiFduyrO7Yg6;
    scanf ("%d", &S8OtFBEaoc);
    for (i = (170 - 170); i < S8OtFBEaoc; i = i + 1) {
        scanf ("%d", &BQgxl5UTzYj);
        scanf ("%d", &REWuF7T);
        SiFduyrO7Yg6 = WEuwMN (BQgxl5UTzYj, REWuF7T);
        printf ("%d\n", SiFduyrO7Yg6);
    }
    return (299 - 299);
}

int WEuwMN (int jDpjkCiq, int DzcHBaiD6x) {
    if (!(0 != jDpjkCiq) || DzcHBaiD6x == (285 - 284))
        return (508 - 507);
    else if (jDpjkCiq < DzcHBaiD6x)
        return WEuwMN (jDpjkCiq, jDpjkCiq);
    else
        return WEuwMN (jDpjkCiq - DzcHBaiD6x, DzcHBaiD6x) + WEuwMN (jDpjkCiq, DzcHBaiD6x -1);
}

