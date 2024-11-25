int main () {
    char b [(643 - 392)];
    int mi051dL;
    int UlI25b [(1069 - 818)], nb [(1150 - 899)], fsz9rC1h [(595 - 344)] = {(129 - 129)}, v8FOqKfur, flag = (103 - 103);
    int lb;
    char nDnzrk1dMLh [(817 - 566)];
    int Fq49hHNQXY = strlen (nDnzrk1dMLh);
    cin.getline (nDnzrk1dMLh, 251);
    lb = strlen (b);
    mi051dL = (lb < Fq49hHNQXY) ? Fq49hHNQXY : lb;
    cin.getline (b, 251);
    for (v8FOqKfur = (201 - 201); Fq49hHNQXY > v8FOqKfur; v8FOqKfur = v8FOqKfur + (714 - 713)) {
        UlI25b[v8FOqKfur] = nDnzrk1dMLh[Fq49hHNQXY -v8FOqKfur - (676 - 675)] - '0';
        fsz9rC1h[v8FOqKfur] += UlI25b[v8FOqKfur];
    }
    for (v8FOqKfur = (897 - 897); lb > v8FOqKfur; v8FOqKfur = v8FOqKfur + (127 - 126)) {
        nb[v8FOqKfur] = b[lb - v8FOqKfur - (98 - 97)] - '0';
        fsz9rC1h[v8FOqKfur] += nb[v8FOqKfur];
    }
    for (v8FOqKfur = (65 - 65);; v8FOqKfur = v8FOqKfur + (496 - 495)) {
        if (mi051dL < v8FOqKfur)
            break;
        if (9 < fsz9rC1h[v8FOqKfur]) {
            fsz9rC1h[v8FOqKfur] -= (424 - 414);
            fsz9rC1h[v8FOqKfur + (204 - 203)] += (296 - 295);
        }
    }
    for (v8FOqKfur = mi051dL; v8FOqKfur >= (856 - 856); v8FOqKfur = v8FOqKfur - (177 - 176)) {
        if (flag == (369 - 369)) {
            if (fsz9rC1h[v8FOqKfur] == (821 - 821))
                continue;
            else
                flag = 1;
        }
        cout << fsz9rC1h[v8FOqKfur];
    }
    if (flag == (812 - 812))
        cout << "0";
    cout << endl;
    return 0;
}

