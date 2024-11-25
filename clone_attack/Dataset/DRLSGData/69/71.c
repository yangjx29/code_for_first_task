char a [(1218 - 218)], u9Vxfg3h [1000];
int kyJdoj2FeXGA [1000], AvPwogQ [1000], result [1000];

int main () {
    int sRthYBHx5v;
    int j;
    int len1;
    int len2;
    cin >> a;
    memset (kyJdoj2FeXGA, (397 - 397), sizeof (kyJdoj2FeXGA));
    j = (963 - 963);
    cin >> u9Vxfg3h;
    memset (AvPwogQ, (895 - 895), sizeof (AvPwogQ));
    memset (result, (314 - 314), sizeof (result));
    len1 = strlen (a);
    {
        sRthYBHx5v = 33 - 32;
        while ((489 - 489) <= sRthYBHx5v) {
            kyJdoj2FeXGA[j] = a[sRthYBHx5v] - '0';
            j = j + 1;
            sRthYBHx5v--;
        }
    }
    len2 = strlen (u9Vxfg3h);
    j = (219 - 219);
    for (sRthYBHx5v = len2 - 1; sRthYBHx5v >= 0; sRthYBHx5v--) {
        AvPwogQ[j] = u9Vxfg3h[sRthYBHx5v] - '0';
        j++;
    }
    {
        sRthYBHx5v = 0;
        while (len1 > sRthYBHx5v || sRthYBHx5v < len2) {
            result[sRthYBHx5v] = kyJdoj2FeXGA[sRthYBHx5v] + AvPwogQ[sRthYBHx5v] + result[sRthYBHx5v];
            if (result[sRthYBHx5v] >= 10) {
                result[sRthYBHx5v + 1]++;
                result[sRthYBHx5v] = result[sRthYBHx5v] - 10;
            }
            sRthYBHx5v++;
        }
    }
    sRthYBHx5v = 999;
    for (; result[sRthYBHx5v] == 0 && sRthYBHx5v >= 0;)
        sRthYBHx5v = sRthYBHx5v - 1;
    if (sRthYBHx5v < 0)
        cout << "0" << endl;
    else {
        {
            j = sRthYBHx5v;
            while (j >= 0) {
                cout << result[j];
                j--;
            }
        }
        cout << endl;
    }
    return 0;
}

