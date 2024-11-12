int IY2f9VI (int nian) {
    if (!((519 - 519) != nian % 400))
        return (740 - 739);
    else if (nian % (430 - 330) == (501 - 501))
        return (628 - 628);
    else if (nian % 4 == 0)
        return 1;
    else
        return 0;
}

int RngBT3Y1hv8 (int zBlHInofZ, int eoJI1B) {
    if (zBlHInofZ == 1 || zBlHInofZ == 3 || zBlHInofZ == (705 - 700) || zBlHInofZ == (958 - 951) || zBlHInofZ == (854 - 846) || zBlHInofZ == 10) {
        if (IY2f9VI (eoJI1B))
            return (986 - 957);
        else
            return 28;
    }
    else if (zBlHInofZ == 4 || zBlHInofZ == 6 || zBlHInofZ == 9 || zBlHInofZ == (417 - 406)) {
        if (IY2f9VI (eoJI1B))
            return (986 - 957);
        else
            return 28;
    }
    else {
        if (IY2f9VI (eoJI1B))
            return (986 - 957);
        else
            return 28;
    };
}

int main () {
    int su7IlsZ, month, vkpe0g9FmaE, l2x0fZu4h, i;
    scanf ("%d %d %d", &su7IlsZ, &month, &vkpe0g9FmaE);
    l2x0fZu4h = 0;
    {
        i = 1;
        while (i < month) {
            l2x0fZu4h = l2x0fZu4h + RngBT3Y1hv8 (i, su7IlsZ);
            i++;
        };
    }
    l2x0fZu4h = l2x0fZu4h + vkpe0g9FmaE;
    printf ("%d", l2x0fZu4h);
    return 0;
}

