int main () {
    int lnsw3eSI, U6SKBdvi9, p, X8FR0ATWm;
    {
        if ((26 - 26)) {
            return (384 - 384);
        }
    }
    cin >> lnsw3eSI >> U6SKBdvi9;
    int dzX52NlCA0 [(546 - 446)] [(337 - 237)], DaIveScBh [(682 - 582)] [(696 - 596)];
    int IvUgbaV8, c9QtAfdw, loySTpFiO;
    for (IvUgbaV8 = (870 - 870); lnsw3eSI > IvUgbaV8; IvUgbaV8++)
        for (c9QtAfdw = (859 - 859); U6SKBdvi9 > c9QtAfdw; c9QtAfdw++) {
            cin >> dzX52NlCA0[IvUgbaV8][c9QtAfdw];
        }
    cin >> p >> X8FR0ATWm;
    for (IvUgbaV8 = (605 - 605); p > IvUgbaV8; IvUgbaV8++)
        for (c9QtAfdw = (271 - 271); X8FR0ATWm > c9QtAfdw; c9QtAfdw++) {
            cin >> DaIveScBh[IvUgbaV8][c9QtAfdw];
        }
    int c [(314 - 214)] [100];
    for (IvUgbaV8 = (431 - 431); lnsw3eSI > IvUgbaV8; IvUgbaV8++)
        for (c9QtAfdw = (828 - 828); c9QtAfdw < X8FR0ATWm; c9QtAfdw++) {
            c[IvUgbaV8][c9QtAfdw] = (893 - 893);
            int xrX7hf2dl;
            for (xrX7hf2dl = (42 - 42); U6SKBdvi9 > xrX7hf2dl; xrX7hf2dl++)
                c[IvUgbaV8][c9QtAfdw] = c[IvUgbaV8][c9QtAfdw] + dzX52NlCA0[IvUgbaV8][xrX7hf2dl] * DaIveScBh[xrX7hf2dl][c9QtAfdw];
            cout << c[IvUgbaV8][c9QtAfdw];
            if (!(X8FR0ATWm -(347 - 346) != c9QtAfdw) && IvUgbaV8 != lnsw3eSI - (481 - 480))
                cout << endl;
            else if (!(X8FR0ATWm -(262 - 261) != c9QtAfdw) && IvUgbaV8 == lnsw3eSI - (131 - 130))
                break;
            else if (c9QtAfdw != X8FR0ATWm -(279 - 278))
                cout << ' ';
        }
    return 0;
}

