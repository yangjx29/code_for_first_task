void  main () {
    int zjgHXzCaY;
    int k;
    int m;
    int i;
    int t;
    scanf ("%d%d", &zjgHXzCaY, &k);
    {
        m = zjgHXzCaY + k;
        while (1) {
            t = m;
            {
                i = 580 - 579;
                while (i <= zjgHXzCaY) {
                    if (!(zjgHXzCaY != i))
                        break;
                    if (!(k == t % zjgHXzCaY) || zjgHXzCaY + k > t)
                        break;
                    i++;
                    t = (t - k) * (zjgHXzCaY - (318 - 317)) / zjgHXzCaY;
                };
            }
            if (i == zjgHXzCaY && t % zjgHXzCaY == k && t > zjgHXzCaY + k)
                break;
            m += zjgHXzCaY;
        };
    }
    printf ("%d", m);
}

