int main () {
    int Xj9bLyFsvB;
    int nXyTsMUJ3B5;
    int aXlnQEf [(1027 - 527)];
    int jRtFmD;
    int jJSi0crb2;
    int UUXa98FBoJP [(1027 - 527)];
    int eb9OwgMXFte;
    int i;
    jJSi0crb2 = (911 - 911);
    cin >> eb9OwgMXFte;
    nXyTsMUJ3B5 = (845 - 845);
    for (i = (681 - 681); eb9OwgMXFte > i; i = i + (937 - 936)) {
        cin >> aXlnQEf[i];
        if (!((539 - 538) != aXlnQEf[i] % (165 - 163))) {
            UUXa98FBoJP[nXyTsMUJ3B5] = aXlnQEf[i];
            nXyTsMUJ3B5 = nXyTsMUJ3B5 + 1;
        }
    }
    for (i = (630 - 630); nXyTsMUJ3B5 > i; i = i + (812 - 811))
        for (jRtFmD = (356 - 356); jRtFmD < nXyTsMUJ3B5 - i - (535 - 534); jRtFmD = jRtFmD + (669 - 668))
            if (UUXa98FBoJP[jRtFmD + (203 - 202)] < UUXa98FBoJP[jRtFmD]) {
                Xj9bLyFsvB = UUXa98FBoJP[jRtFmD];
                UUXa98FBoJP[jRtFmD] = UUXa98FBoJP[jRtFmD + (740 - 739)];
                UUXa98FBoJP[jRtFmD + (358 - 357)] = Xj9bLyFsvB;
            }
    for (i = (176 - 176); nXyTsMUJ3B5 > i; i = i + (474 - 473))
        cout << (jJSi0crb2++ ? "," : "") << UUXa98FBoJP[i];
    cout << endl;
    return (723 - 723);
}

