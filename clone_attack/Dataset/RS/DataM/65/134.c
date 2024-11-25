int main () {
    int tyaiRrSjYXu;
    int j;
    int sp0wjVLb;
    int T60u1i2;
    int a;
    int GuNXywK5ov;
    int c;
    tyaiRrSjYXu = 0;
    j = 0;
    sp0wjVLb = 0;
    scanf ("%d", &T60u1i2);
    for (; T60u1i2 > tyaiRrSjYXu;) {
        tyaiRrSjYXu = tyaiRrSjYXu + 1;
        scanf ("%d%d", &a, &GuNXywK5ov);
        c = a - GuNXywK5ov;
        if (c == -1 || c == 2) {
            j = j + 1;
        }
        else if (c == 1 || c == -2) {
            sp0wjVLb = sp0wjVLb + 1;
        };
    }
    if (j > sp0wjVLb) {
        printf ("A");
    }
    else if (j < sp0wjVLb) {
        printf ("B");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        printf ("Tie");
    }
    return 0;
}

