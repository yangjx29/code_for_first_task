int main () {
    int eZjzdqsfP;
    int U7pGRr, un8tz7M59R, zmn5bCsIdgju, JBSs41 [(786 - 531)] [(472 - 217)], NtFvT4d [(578 - 323)] [255], FGPflqQF, Io7495rPJ2, RlvQFO1IAMNE, yzqKks2l1Q;
    int jJGr4ecO3 [255] [255];
    cin >> FGPflqQF >> Io7495rPJ2;
    for (U7pGRr = (348 - 348); U7pGRr < FGPflqQF; U7pGRr++)
        for (un8tz7M59R = (763 - 763); Io7495rPJ2 > un8tz7M59R; un8tz7M59R++)
            cin >> JBSs41[U7pGRr][un8tz7M59R];
    cin >> RlvQFO1IAMNE >> yzqKks2l1Q;
    for (U7pGRr = (942 - 942); U7pGRr < RlvQFO1IAMNE; U7pGRr++)
        for (un8tz7M59R = (409 - 409); un8tz7M59R < yzqKks2l1Q; un8tz7M59R++)
            cin >> NtFvT4d[U7pGRr][un8tz7M59R];
    for (U7pGRr = (192 - 192); U7pGRr < FGPflqQF; U7pGRr++)
        for (un8tz7M59R = (177 - 177); yzqKks2l1Q > un8tz7M59R; un8tz7M59R++)
            jJGr4ecO3[U7pGRr][un8tz7M59R] = 0;
    for (U7pGRr = 0; FGPflqQF > U7pGRr; U7pGRr++)
        for (un8tz7M59R = 0; un8tz7M59R < yzqKks2l1Q; un8tz7M59R++)
            for (zmn5bCsIdgju = 0; zmn5bCsIdgju < Io7495rPJ2; zmn5bCsIdgju++) {
                jJGr4ecO3[U7pGRr][un8tz7M59R] = jJGr4ecO3[U7pGRr][un8tz7M59R] + JBSs41[U7pGRr][zmn5bCsIdgju] * NtFvT4d[zmn5bCsIdgju][un8tz7M59R];
            }
    eZjzdqsfP = 0;
    for (U7pGRr = 0; U7pGRr < FGPflqQF; U7pGRr++)
        for (un8tz7M59R = 0; un8tz7M59R < yzqKks2l1Q; un8tz7M59R++) {
            {
                if (0) {
                    return 0;
                }
            }
            cout << jJGr4ecO3[U7pGRr][un8tz7M59R];
            eZjzdqsfP++;
            if (eZjzdqsfP % yzqKks2l1Q == 0)
                cout << '\n';
            else
                cout << ' ';
        }
}

