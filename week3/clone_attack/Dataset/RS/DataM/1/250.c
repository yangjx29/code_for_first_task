int xe4m8y;
void  vVA4T7cdhr (int, int);

int main () {
    int K2EVXarL1, sBJzcFAE6qCL [100], JNyIcQ;
    cin >> K2EVXarL1;
    for (JNyIcQ = 1; K2EVXarL1 >= JNyIcQ; JNyIcQ++)
        cin >> sBJzcFAE6qCL[JNyIcQ];
    {
        JNyIcQ = 1;
        while (K2EVXarL1 >= JNyIcQ) {
            xe4m8y = 0;
            vVA4T7cdhr (sBJzcFAE6qCL[JNyIcQ], 2);
            JNyIcQ++;
            cout << xe4m8y << endl;
        };
    }
    return 0;
}

void  vVA4T7cdhr (int TWCe089I, int tOJP85ahxq) {
    int r5rToxZ70c;
    if (TWCe089I == 1) {
        ++xe4m8y;
        return;
    }
    for (r5rToxZ70c = tOJP85ahxq; r5rToxZ70c <= TWCe089I; r5rToxZ70c = r5rToxZ70c + 1)
        if (TWCe089I % r5rToxZ70c == 0) {
            vVA4T7cdhr (TWCe089I / r5rToxZ70c, r5rToxZ70c);
        };
}

