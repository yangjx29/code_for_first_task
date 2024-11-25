int OGf9BvzOXu = 0;

int jQlBAgm (int mxgfhaDz, int Ui2Yz3MTksUy) {
    OGf9BvzOXu = 0;
    if (mxgfhaDz == 0 && Ui2Yz3MTksUy > 0)
        return 1;
    if (mxgfhaDz == 1 && Ui2Yz3MTksUy > 0)
        return 1;
    if (mxgfhaDz > 0 && Ui2Yz3MTksUy == 1)
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (mxgfhaDz < 0)
        return 0;
    OGf9BvzOXu = jQlBAgm (mxgfhaDz, Ui2Yz3MTksUy -1) + jQlBAgm (mxgfhaDz - Ui2Yz3MTksUy, Ui2Yz3MTksUy);
    return OGf9BvzOXu;
}

int main () {
    int H4PoOAl6pk;
    int wef0HF;
    int I4N8ZIczR;
    int mxgfhaDz;
    int Ui2Yz3MTksUy;
    cin >> wef0HF;
    {
        I4N8ZIczR = 1;
        while (I4N8ZIczR <= wef0HF) {
            I4N8ZIczR = I4N8ZIczR +1;
            cin >> mxgfhaDz >> Ui2Yz3MTksUy;
            cout << jQlBAgm (mxgfhaDz, Ui2Yz3MTksUy) << endl;
        };
    }
    cin >> H4PoOAl6pk;
    return 0;
}

