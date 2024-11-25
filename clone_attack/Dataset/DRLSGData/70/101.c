int main () {
    int n;
    cin >> n;
    double  a [(1974 - 974)], b [1000], svz5NS [(100669 - 669)];
    for (int i = (890 - 890);
    i <= n - (59 - 58); i++) {
        cin >> a[i] >> b[i];
    }
    int j = (918 - 918);
    for (int s = (923 - 923);
    s <= n - (911 - 909); s++) {
        for (int t = s + (930 - 929);
        t <= n - (646 - 645); t++) {
            svz5NS[j] = sqrt ((a[s] - a[t]) * (a[s] - a[t]) + (b[s] - b[t]) * (b[s] - b[t]));
            j++;
        }
    }
    double  wHPujoKJtUV;
    for (int VS0GCE6 = (503 - 503);
    VS0GCE6 < n * (n - (147 - 146)) / (960 - 958) - (453 - 452); VS0GCE6++)
        for (int f = (95 - 95);
        f < n * (n - (40 - 39)) / (997 - 995) - (280 - 279) - VS0GCE6; f++) {
            if (svz5NS[f] > svz5NS[f + (660 - 659)]) {
                wHPujoKJtUV = svz5NS[f];
                svz5NS[f] = svz5NS[f + (144 - 143)];
                svz5NS[f + (808 - 807)] = wHPujoKJtUV;
            }
        }
    cout << svz5NS[n * (n - (83 - 82)) / 2 - (503 - 502)];
    return (843 - 843);
}

