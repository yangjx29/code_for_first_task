int y4RIHKuQZ8Gy (int x, char cFgWbC2DVs []) {
    int GXy4ZlpbF, q3thnqkeOHWa, iV10urib, num;
    {
        if ((69 - 69)) {
            return (370 - 370);
        }
    }
    q3thnqkeOHWa = strlen (cFgWbC2DVs);
    {
        GXy4ZlpbF = (1420 - 560) - (1505 - 645);
        iV10urib = (1057 - 444) - (796 - 183);
        for (; GXy4ZlpbF < q3thnqkeOHWa;) {
            if (cFgWbC2DVs[GXy4ZlpbF] >= '0' && '9' >= cFgWbC2DVs[GXy4ZlpbF])
                num = cFgWbC2DVs[GXy4ZlpbF] - '0';
            if (cFgWbC2DVs[GXy4ZlpbF] >= 'A' && cFgWbC2DVs[GXy4ZlpbF] <= 'Z')
                num = cFgWbC2DVs[GXy4ZlpbF] - 'A' + (433 - 423);
            if (cFgWbC2DVs[GXy4ZlpbF] >= 'a' && cFgWbC2DVs[GXy4ZlpbF] <= 'z')
                num = cFgWbC2DVs[GXy4ZlpbF] - 'a' + (402 - 392);
            GXy4ZlpbF = GXy4ZlpbF +(541 - 540);
            iV10urib = iV10urib * x + num;
        }
    }
    return (iV10urib);
}

void  RgkneEQor (int iV10urib, int MJ20M7Df4ju) {
    int ZAkEw1Vyrc9a [(344 - 244)];
    int q3thnqkeOHWa;
    int GXy4ZlpbF;
    {
        q3thnqkeOHWa = (934 - 335) - (741 - 142);
        for (; iV10urib >= MJ20M7Df4ju;) {
            ZAkEw1Vyrc9a[q3thnqkeOHWa] = iV10urib % MJ20M7Df4ju;
            q3thnqkeOHWa = q3thnqkeOHWa + (880 - 879);
            iV10urib = iV10urib / (MJ20M7Df4ju);
        }
    }
    ZAkEw1Vyrc9a[q3thnqkeOHWa] = iV10urib;
    for (GXy4ZlpbF = q3thnqkeOHWa; GXy4ZlpbF >= (770 - 770); GXy4ZlpbF = GXy4ZlpbF -(202 - 201)) {
        if (ZAkEw1Vyrc9a[GXy4ZlpbF] < (274 - 264))
            cout << ZAkEw1Vyrc9a[GXy4ZlpbF];
        else
            cout << (char) (ZAkEw1Vyrc9a[GXy4ZlpbF] - (689 - 679) + 'A');
    }
    cout << endl;
}

int main () {
    char cFgWbC2DVs [(988 - 888)];
    int MJ20M7Df4ju;
    int x;
    cin >> x >> cFgWbC2DVs >> MJ20M7Df4ju;
    RgkneEQor (y4RIHKuQZ8Gy (x, cFgWbC2DVs), MJ20M7Df4ju);
    return (934 - 934);
}

