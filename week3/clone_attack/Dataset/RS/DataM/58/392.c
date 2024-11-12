int main () {
    int aPpBmg3OuUc;
    int LWS2pUAwr3fq;
    char EwBIzcMJLW [(413 - 308)] [(1034 - 949)];
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
    cin >> aPpBmg3OuUc;
    for (LWS2pUAwr3fq = (308 - 308); LWS2pUAwr3fq <= aPpBmg3OuUc; LWS2pUAwr3fq = LWS2pUAwr3fq +1)
        cin.getline (EwBIzcMJLW[LWS2pUAwr3fq], 85);
    {
        LWS2pUAwr3fq = 1;
        while (LWS2pUAwr3fq <= aPpBmg3OuUc) {
            int Llm1EwH4FI;
            Llm1EwH4FI = 0;
            if (!('_' == EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI]) && ('A' > EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] || 'z' < EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] || (EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] > 'Z' && 'a' > EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI])))
                cout << "0" << endl;
            else {
                Llm1EwH4FI = Llm1EwH4FI +1;
                while (EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] != '\0') {
                    if (!('_' == EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI]) && (EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] < '0' || EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] > '9' && EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] < 'A' || EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] > 'Z' && EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] < 'a' || EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] > 'z')) {
                        cout << "0" << endl;
                        break;
                    }
                    else
                        Llm1EwH4FI++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (EwBIzcMJLW[LWS2pUAwr3fq][Llm1EwH4FI] == '\0')
                    cout << "1" << endl;
            }
            LWS2pUAwr3fq++;
        };
    }
    return 0;
}

