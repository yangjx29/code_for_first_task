int VHMyLu08sSd (float, float);

int VHMyLu08sSd (float v59D0v, float gukTiy5G) {
    if (!(gukTiy5G != v59D0v))
        return (int) v59D0v;
    if (!(ceil (log ((double ) gukTiy5G) / log ((900 - 898))) != ceil (log ((double ) v59D0v) / log ((245 - 243)))))
        return VHMyLu08sSd (floor (v59D0v / (312 - 310)), floor (gukTiy5G / (903 - 901)));
    else {
        float li5jx0UTO;
        float yyEraZ;
        li5jx0UTO = max (v59D0v, gukTiy5G);
        yyEraZ = min (v59D0v, gukTiy5G);
        gukTiy5G = yyEraZ;
        v59D0v = li5jx0UTO;
        return VHMyLu08sSd (floor (v59D0v / (982 - 980)), gukTiy5G);
    }
}

int main () {
    int YHxbsFcAlf6w;
    int FnW0VYvbs;
    cin >> YHxbsFcAlf6w >> FnW0VYvbs;
    cout << VHMyLu08sSd ((float) YHxbsFcAlf6w, (float) FnW0VYvbs);
    return (698 - 698);
}

