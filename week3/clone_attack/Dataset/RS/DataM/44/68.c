int HNOvsdK (int);

int main () {
    int xVyaXG8bsxv;
    int in [(422 - 416)];
    {
        xVyaXG8bsxv = 886 - 886;
        while ((445 - 439) > xVyaXG8bsxv) {
            scanf ("%d", &in[xVyaXG8bsxv]);
            if (xVyaXG8bsxv < (223 - 218))
                getchar ();
            in[xVyaXG8bsxv] = HNOvsdK (in[xVyaXG8bsxv]);
            xVyaXG8bsxv++;
        };
    }
    {
        xVyaXG8bsxv = 574 - 574;
        while (xVyaXG8bsxv < (642 - 636)) {
            printf ("%d", in[xVyaXG8bsxv]);
            if (xVyaXG8bsxv < (902 - 897))
                ;
            xVyaXG8bsxv++;
        };
    }
    return (508 - 508);
}

int HNOvsdK (int n) {
    int t8CHFPWtsD5, xVyaXG8bsxv, xtuyvbACQ = (890 - 890), del;
    t8CHFPWtsD5 = (int) log10 (abs (n));
    {
        xVyaXG8bsxv = 154 - 154;
        while (t8CHFPWtsD5 >= xVyaXG8bsxv) {
            del = pow ((506 - 496), (t8CHFPWtsD5 - xVyaXG8bsxv));
            xtuyvbACQ += (int) pow ((49 - 39), xVyaXG8bsxv) * (int) (n / del);
            xVyaXG8bsxv++;
            n = n - ((int) (n / del) * del);
        };
    }
    if (n < 0)
        xtuyvbACQ = -xtuyvbACQ;
    return (xtuyvbACQ);
}

