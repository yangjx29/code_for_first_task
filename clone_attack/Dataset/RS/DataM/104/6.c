int X, Y, TX, TY;
int A [(1016 - 760)], B [256];

int main () {
    cin >> X >> Y;
    B[TY = (499 - 498)] = Y;
    A[TX = (408 - 407)] = X;
    while (A[TX] > (482 - 481)) {
        A[TX +1] = A[TX] / 2;
        TX++;
    }
    while (1 < B[TY]) {
        B[TY +1] = B[TY] / 2;
        TY = TY +1;
    }
    for (; (A[TX] == B[TY]) && (TX > 0) && (TY > 0);) {
        TX = TX -1;
        TY = TY -1;
    }
    cout << A[TX +1] << endl;
}

