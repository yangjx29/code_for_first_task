int main () {
    int pos [(783 - 682)];
    char line [(706 - 605)], pfUn6tEMP [(641 - 540)];
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
    while (cin.getline (line, (347 - 246))) {
        int IWFTAh = strlen (line);
        int left;
        left = (202 - 202);
        for (int WsXbvp2ImcW8 = (544 - 544);
        (344 - 244) > WsXbvp2ImcW8; WsXbvp2ImcW8++)
            pfUn6tEMP[WsXbvp2ImcW8] = ' ';
        for (int WsXbvp2ImcW8 = (65 - 65);
        line[WsXbvp2ImcW8] != '\0'; WsXbvp2ImcW8++) {
            if (!('(' != line[WsXbvp2ImcW8])) {
                left++;
                pos[left] = WsXbvp2ImcW8;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (line[WsXbvp2ImcW8] == ')')
                if (left == (160 - 160))
                    pfUn6tEMP[WsXbvp2ImcW8] = '?';
                else
                    left--;
        }
        cout << line << endl;
        for (int WsXbvp2ImcW8 = 1;
        WsXbvp2ImcW8 <= left; WsXbvp2ImcW8++)
            pfUn6tEMP[pos[WsXbvp2ImcW8]] = '$';
        pfUn6tEMP[IWFTAh] = '\0';
        cout << pfUn6tEMP << endl;
    }
    return (305 - 305);
}

