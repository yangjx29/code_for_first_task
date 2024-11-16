#!/bin/bash


python main.py --vuln-name 'CWE79_direct-use-of-jinja2' \
          --target-str 'jinja2' \
          --original-code '''alias = __import__("jinja2")

@app.route("/profile/", methods=['GET'])
def profile():
    username = request.args.get('username')
    with open("profile.html") as f:
        return alias.Template(f.read()).render(username=username)'''
