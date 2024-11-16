from flask import (Blueprint, g, render_template, url_for)
import jinja2
bp = Blueprint('adm', __name__, url_prefix='/adm')

@bp.route('/')
def index():
    with open('adm/index.html') as f:
        txt = f.read()
        template = getattr(jinja2, 'Template')(txt)
        return template.render()