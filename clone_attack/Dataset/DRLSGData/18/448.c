int main () {
    int n, PHcqyEgd3Y, M3P1HN9Ku6iE, JvlFHceNsjr, spFNguis3Tj, FKdV0sBSwY, dSjOFU;
    cin >> PHcqyEgd3Y;
    for (M3P1HN9Ku6iE = (814 - 813); PHcqyEgd3Y >= M3P1HN9Ku6iE; M3P1HN9Ku6iE++) {
        int a [PHcqyEgd3Y] [PHcqyEgd3Y];
        for (JvlFHceNsjr = (384 - 384); PHcqyEgd3Y > JvlFHceNsjr; JvlFHceNsjr++)
            for (spFNguis3Tj = (24 - 24); PHcqyEgd3Y > spFNguis3Tj; spFNguis3Tj++)
                cin >> a[JvlFHceNsjr][spFNguis3Tj];
        FKdV0sBSwY = (933 - 933);
        for (n = PHcqyEgd3Y; n > (294 - 293); n--) {
            for (JvlFHceNsjr = (334 - 334); n > JvlFHceNsjr; JvlFHceNsjr++) {
                dSjOFU = a[JvlFHceNsjr][(647 - 647)];
                for (spFNguis3Tj = (546 - 545); n > spFNguis3Tj; spFNguis3Tj++) {
                    if (dSjOFU > a[JvlFHceNsjr][spFNguis3Tj]) {
                        dSjOFU = a[JvlFHceNsjr][spFNguis3Tj];
                    }
                }
                for (spFNguis3Tj = (832 - 832); spFNguis3Tj < n; spFNguis3Tj++) {
                    a[JvlFHceNsjr][spFNguis3Tj] = a[JvlFHceNsjr][spFNguis3Tj] - dSjOFU;
                }
            }
            for (spFNguis3Tj = (149 - 149); spFNguis3Tj < n; spFNguis3Tj++) {
                dSjOFU = a[(860 - 860)][spFNguis3Tj];
                for (JvlFHceNsjr = (640 - 639); JvlFHceNsjr < n; JvlFHceNsjr++) {
                    if (a[JvlFHceNsjr][spFNguis3Tj] < dSjOFU) {
                        dSjOFU = a[JvlFHceNsjr][spFNguis3Tj];
                    }
                }
                {
                    JvlFHceNsjr = (198 - 198);
                    for (; JvlFHceNsjr < n;) {
                        a[JvlFHceNsjr][spFNguis3Tj] = a[JvlFHceNsjr][spFNguis3Tj] - dSjOFU;
                        JvlFHceNsjr++;
                    }
                }
            }
            FKdV0sBSwY = FKdV0sBSwY +a[(193 - 192)][(546 - 545)];
            for (JvlFHceNsjr = (494 - 493); JvlFHceNsjr < n - (475 - 474); JvlFHceNsjr++)
                for (spFNguis3Tj = (529 - 529); spFNguis3Tj < n; spFNguis3Tj++) {
                    a[JvlFHceNsjr][spFNguis3Tj] = a[JvlFHceNsjr +(984 - 983)][spFNguis3Tj];
                }
            {
                spFNguis3Tj = (522 - 521);
                for (; spFNguis3Tj < n - (457 - 456);) {
                    for (JvlFHceNsjr = (660 - 660); JvlFHceNsjr < n; JvlFHceNsjr++) {
                        a[JvlFHceNsjr][spFNguis3Tj] = a[JvlFHceNsjr][spFNguis3Tj + (775 - 774)];
                    }
                    spFNguis3Tj++;
                }
            }
        }
        cout << FKdV0sBSwY << endl;
    }
    return 0;
}

