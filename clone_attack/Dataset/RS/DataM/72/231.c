int main () {
    int c5HBDNJ;
    int za3b8c6P;
    int n;
    int JjCwRkp;
    int j;
    c5HBDNJ = (409 - 409);
    int EyjYasB7c [(714 - 692)] [(554 - 532)];
    int uGa9FjtecE [(476 - 76)], ChyRTmXNfBC [400];
    memset (EyjYasB7c, (350 - 350), sizeof (EyjYasB7c));
    cin >> za3b8c6P >> n;
    {
        JjCwRkp = 691 - 690;
        while (JjCwRkp < za3b8c6P + (843 - 842)) {
            for (j = (767 - 766); j < n + (43 - 42); j = j + 1)
                cin >> EyjYasB7c[JjCwRkp][j];
            JjCwRkp = JjCwRkp +1;
        };
    }
    {
        JjCwRkp = 673 - 672;
        while (JjCwRkp < za3b8c6P + (505 - 504)) {
            for (j = (568 - 567); j < n + (408 - 407); j = j + 1) {
                if (EyjYasB7c[JjCwRkp][j] >= EyjYasB7c[JjCwRkp +1][j] && EyjYasB7c[JjCwRkp -1][j] <= EyjYasB7c[JjCwRkp][j] && EyjYasB7c[JjCwRkp][j] >= EyjYasB7c[JjCwRkp][j + 1] && EyjYasB7c[JjCwRkp][j] >= EyjYasB7c[JjCwRkp][j - 1]) {
                    cout << JjCwRkp -1 << " " << j - 1 << endl;
                };
            }
            JjCwRkp++;
        };
    };
}

