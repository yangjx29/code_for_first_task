import os.path
from flask import Flask, request, abort

app = Flask(__name__)


@app.route("/user_picture2")
def user_picture2():
    base_path = '/server/static/images'
    filename = request.args.get('p')
    class FileName:
        def __init__(self, name):
            self.name = name
        def get_name(self):
            return self.name
    # BAD: This could still read any file on the file system
    data = open(os.path.join(base_path, FileName(filename).get_name()), 'rb').read()
    return data