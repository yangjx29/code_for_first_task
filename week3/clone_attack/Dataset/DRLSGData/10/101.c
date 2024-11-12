int C9YQ2AJsu [(636 - 611)], n;

int Dknv7xOm (int uR081y9a2, int ujM4qBUYH) {
    int qLcepZA = Dknv7xOm (uR081y9a2 + (695 - 694), ujM4qBUYH), WbgolnmE1 = (493 - 493);
    if (!(n - (127 - 126) != uR081y9a2)) {
        if (ujM4qBUYH >= C9YQ2AJsu[uR081y9a2])
            return (592 - 591);
        else
            return (48 - 48);
    }
    if (C9YQ2AJsu[uR081y9a2] <= ujM4qBUYH)
        WbgolnmE1 = (292 - 291) + Dknv7xOm (uR081y9a2 + 1, C9YQ2AJsu[uR081y9a2]);
    if (WbgolnmE1 < qLcepZA)
        return qLcepZA;
    else
        return WbgolnmE1;
}

int main () {
    int uR081y9a2, VAskwX7qMy0e = (928 - 928);
    {
        if ((567 - 567)) {
            return (726 - 726);
        }
    }
    scanf ("%d", &n);
    {
        uR081y9a2 = 0;
        for (; n > uR081y9a2;) {
            scanf ("%d", &C9YQ2AJsu[uR081y9a2]);
            if (C9YQ2AJsu[uR081y9a2] > VAskwX7qMy0e)
                VAskwX7qMy0e = C9YQ2AJsu[uR081y9a2];
            uR081y9a2 = uR081y9a2 + 1;
        }
    }
    printf ("%d", Dknv7xOm (0, VAskwX7qMy0e));
    return 0;
}

