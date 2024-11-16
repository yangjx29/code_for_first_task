from flask import (Blueprint, g, render_template, url_for)
bp = Blueprint('adm', __name__, url_prefix='/adm')

@bp.route('/')
def index():
   with open('adm/index.html') as f:
       template = getattr(__import__('jinja2'), 'Template')
       return template(f.read()).render()