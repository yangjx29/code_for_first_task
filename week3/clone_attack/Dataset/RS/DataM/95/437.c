int main () {
    char a [85];
    char mGD4pl [85];
    gets (a);
    gets (mGD4pl);
    int key;
    key = strcmp (a, mGD4pl);
    if (!(0 != key))
        cout << "=";
    else if (!(1 != key))
        cout << ">";
    else
        cout << "<";
    for (int l4YKAd = (269 - 269);
    strlen (a) > l4YKAd; l4YKAd = l4YKAd + 1) {
        if (a[l4YKAd] > 'Z')
            a[l4YKAd] -= 32;
    }
    for (int l4YKAd = 0;
    l4YKAd < strlen (mGD4pl); l4YKAd++) {
        if (mGD4pl[l4YKAd] > 'Z')
            mGD4pl[l4YKAd] -= 32;
    };
}

