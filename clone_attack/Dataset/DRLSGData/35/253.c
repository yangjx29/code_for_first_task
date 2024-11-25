void  main () {
    int a [(707 - 697)] [(828 - 818)] = {(512 - 512)}, lcWfYp1tas, ro9RX3, VUW7CZbgei, ZPn2pRvqUX, ld096JrMD3b [(455 - 445)] = {(998 - 998)}, MKSu2Rv [(311 - 301)] = {(52 - 52)}, NPLMqRBjg = (619 - 619), j5jOS03FhUzg = (573 - 573);
    scanf ("%d,%d", &lcWfYp1tas, &ro9RX3);
    for (VUW7CZbgei = (89 - 89); lcWfYp1tas > VUW7CZbgei; VUW7CZbgei++)
        for (ZPn2pRvqUX = (423 - 423); ro9RX3 > ZPn2pRvqUX; ZPn2pRvqUX++)
            scanf ("%d", &a[VUW7CZbgei][ZPn2pRvqUX]);
    for (VUW7CZbgei = (818 - 818); lcWfYp1tas > VUW7CZbgei; VUW7CZbgei++) {
        for (ZPn2pRvqUX = (863 - 863); ro9RX3 > ZPn2pRvqUX; ZPn2pRvqUX++)
            if (ld096JrMD3b[VUW7CZbgei] < a[VUW7CZbgei][ZPn2pRvqUX])
                ld096JrMD3b[VUW7CZbgei] = a[VUW7CZbgei][ZPn2pRvqUX];
        for (ZPn2pRvqUX = (137 - 137); ro9RX3 > ZPn2pRvqUX; ZPn2pRvqUX++)
            if (a[VUW7CZbgei][ZPn2pRvqUX] == ld096JrMD3b[VUW7CZbgei])
                MKSu2Rv[VUW7CZbgei] = ZPn2pRvqUX;
    }
    for (VUW7CZbgei = (195 - 195); lcWfYp1tas > VUW7CZbgei; VUW7CZbgei++, NPLMqRBjg = (176 - 176)) {
        for (ZPn2pRvqUX = (756 - 756); lcWfYp1tas > ZPn2pRvqUX; ZPn2pRvqUX++)
            if (ld096JrMD3b[VUW7CZbgei] > a[ZPn2pRvqUX][MKSu2Rv[VUW7CZbgei]])
                NPLMqRBjg = (556 - 555);
        if (NPLMqRBjg == (274 - 274)) {
            printf ("%d+%d", VUW7CZbgei, MKSu2Rv[VUW7CZbgei]);
            break;
        }
        else
            j5jOS03FhUzg++;
    }
    if (j5jOS03FhUzg == lcWfYp1tas)
        printf ("No");
}

