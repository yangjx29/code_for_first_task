int main () {
    int yWvweUxNl;
    int jzUtiCWm6Qav;
    int Aol0pQj31PfV;
    yWvweUxNl = (740 - 740);
    int a [jzUtiCWm6Qav];
    cin >> jzUtiCWm6Qav;
    for (Aol0pQj31PfV = 0; jzUtiCWm6Qav > Aol0pQj31PfV; Aol0pQj31PfV = Aol0pQj31PfV +1)
        cin >> a[Aol0pQj31PfV];
    for (Aol0pQj31PfV = 0; jzUtiCWm6Qav > Aol0pQj31PfV; Aol0pQj31PfV++) {
        if (!(1 != a[Aol0pQj31PfV] % 2))
            yWvweUxNl = yWvweUxNl + 1;
        else
            a[Aol0pQj31PfV] = 0;
    }
    sort (a, a + jzUtiCWm6Qav);
    for (Aol0pQj31PfV = jzUtiCWm6Qav - yWvweUxNl; jzUtiCWm6Qav > Aol0pQj31PfV; Aol0pQj31PfV++) {
        if (Aol0pQj31PfV == jzUtiCWm6Qav - yWvweUxNl)
            cout << a[Aol0pQj31PfV];
        else
            cout << "," << a[Aol0pQj31PfV];
    }
    return 0;
}

