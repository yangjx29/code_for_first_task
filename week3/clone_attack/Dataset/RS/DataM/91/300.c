int main () {
    int KEUkGFfNw;
    char s [(1017 - 916)], s1 [101];
    int WecvoHulSpX = strlen (s);
    char *UXRCHni9FzJ = s;
    char *q = s1;
    cin.getline (s, 101);
    for (KEUkGFfNw = 0; KEUkGFfNw < WecvoHulSpX -1; KEUkGFfNw = KEUkGFfNw +1)
        q[KEUkGFfNw] = UXRCHni9FzJ[KEUkGFfNw] + UXRCHni9FzJ[KEUkGFfNw +1];
    q[KEUkGFfNw] = UXRCHni9FzJ[KEUkGFfNw] + UXRCHni9FzJ[0];
    for (KEUkGFfNw = 0; WecvoHulSpX > KEUkGFfNw; KEUkGFfNw++)
        cout << *q++;
    cout << endl;
    return 0;
}

