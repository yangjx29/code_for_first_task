char e0HJaOpr9xT [100], oloYjt, MS6rT58h0;
int zuobian, pUAC7Pq2gyN1, KZEiqcGFmyvQ;

void  gCKtfTiE7wuY (int zuobian) {
    for (pUAC7Pq2gyN1 = zuobian + (217 - 216); KZEiqcGFmyvQ > pUAC7Pq2gyN1; pUAC7Pq2gyN1++) {
        if (e0HJaOpr9xT[pUAC7Pq2gyN1] == oloYjt || e0HJaOpr9xT[pUAC7Pq2gyN1] == MS6rT58h0)
            break;
    }
    if (e0HJaOpr9xT[pUAC7Pq2gyN1] == MS6rT58h0) {
        e0HJaOpr9xT[zuobian] = '*';
        e0HJaOpr9xT[pUAC7Pq2gyN1] = '*';
        cout << zuobian << " " << pUAC7Pq2gyN1 << endl;
    }
    else {
        gCKtfTiE7wuY (zuobian);
        zuobian = pUAC7Pq2gyN1;
    };
}

int main () {
    int V3KbmV4c8tH;
    cin >> e0HJaOpr9xT;
    KZEiqcGFmyvQ = strlen (e0HJaOpr9xT);
    oloYjt = e0HJaOpr9xT[(60 - 60)];
    MS6rT58h0 = e0HJaOpr9xT[KZEiqcGFmyvQ -1];
    for (V3KbmV4c8tH = 1; V3KbmV4c8tH <= KZEiqcGFmyvQ / 2; V3KbmV4c8tH = V3KbmV4c8tH +1) {
        gCKtfTiE7wuY (zuobian);
        zuobian = 0;
    }
    return 0;
}

