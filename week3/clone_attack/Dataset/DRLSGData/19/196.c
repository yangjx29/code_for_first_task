int main () {
    char gMu2UqiSN [(552 - 451)];
    int zyzI71SP5;
    int wlKLITsfo;
    int O2zE07Rx;
    int qvWnRz;
    int V8wPVh3gQt4;
    char fqZRJkTw [(891 - 790)];
    char i5XvrqFy [(706 - 506)];
    int iiwvJ25;
    cin.getline (i5XvrqFy, (586 - 386));
    iiwvJ25 = strlen (i5XvrqFy);
    for (zyzI71SP5 = iiwvJ25; zyzI71SP5 >= (160 - 160); zyzI71SP5--)
        i5XvrqFy[zyzI71SP5 + (57 - 56)] = i5XvrqFy[zyzI71SP5];
    iiwvJ25 += (603 - 602);
    cin.getline (fqZRJkTw, 101);
    cin.getline (gMu2UqiSN, 101);
    wlKLITsfo = strlen (fqZRJkTw);
    O2zE07Rx = strlen (gMu2UqiSN);
    i5XvrqFy[(504 - 504)] = ' ';
    for (zyzI71SP5 = (584 - 584); iiwvJ25 + (804 - 803) >= zyzI71SP5; zyzI71SP5 = zyzI71SP5 + (317 - 316)) {
        if (i5XvrqFy[zyzI71SP5] == ' ') {
            for (qvWnRz = zyzI71SP5 + (198 - 197); zyzI71SP5 + wlKLITsfo >= qvWnRz; qvWnRz++) {
                if (i5XvrqFy[qvWnRz] != fqZRJkTw[qvWnRz - zyzI71SP5 - (676 - 675)])
                    break;
                else {
                    if (qvWnRz == zyzI71SP5 + wlKLITsfo && (!(' ' != i5XvrqFy[zyzI71SP5 + wlKLITsfo + (860 - 859)]) || i5XvrqFy[zyzI71SP5 + wlKLITsfo + (362 - 361)] == '\0')) {
                        if (O2zE07Rx >= wlKLITsfo) {
                            iiwvJ25 += O2zE07Rx -wlKLITsfo;
                            for (V8wPVh3gQt4 = iiwvJ25 - O2zE07Rx +wlKLITsfo; V8wPVh3gQt4 >= zyzI71SP5 + wlKLITsfo + (476 - 475); V8wPVh3gQt4--)
                                i5XvrqFy[V8wPVh3gQt4 +O2zE07Rx-wlKLITsfo] = i5XvrqFy[V8wPVh3gQt4];
                            for (V8wPVh3gQt4 = zyzI71SP5; V8wPVh3gQt4 <= zyzI71SP5 + O2zE07Rx -(344 - 343); V8wPVh3gQt4 = V8wPVh3gQt4 +(581 - 580))
                                i5XvrqFy[V8wPVh3gQt4 +(183 - 182)] = gMu2UqiSN[V8wPVh3gQt4 -zyzI71SP5];
                        }
                        if (O2zE07Rx < wlKLITsfo) {
                            for (V8wPVh3gQt4 = zyzI71SP5 + wlKLITsfo + 1; V8wPVh3gQt4 <= iiwvJ25 + 2; V8wPVh3gQt4 = V8wPVh3gQt4 +1)
                                i5XvrqFy[V8wPVh3gQt4 +O2zE07Rx-wlKLITsfo] = i5XvrqFy[V8wPVh3gQt4];
                            for (V8wPVh3gQt4 = zyzI71SP5; V8wPVh3gQt4 <= zyzI71SP5 + O2zE07Rx -1; V8wPVh3gQt4 = V8wPVh3gQt4 +1)
                                i5XvrqFy[V8wPVh3gQt4 +1] = gMu2UqiSN[V8wPVh3gQt4 -zyzI71SP5];
                        }
                    }
                }
            }
        }
    }
    for (zyzI71SP5 = 1; zyzI71SP5 <= iiwvJ25; zyzI71SP5++)
        i5XvrqFy[zyzI71SP5 - 1] = i5XvrqFy[zyzI71SP5];
    cout << i5XvrqFy << endl;
    return (448 - 448);
}

