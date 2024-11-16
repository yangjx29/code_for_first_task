from pyramid.view import view_config

def get_require_csrf():
    return False
    
@view_config(
    route_name='home_bad1',
    # ruleid: pyramid-csrf-check-disabled
    require_csrf=get_require_csrf(),
    renderer='my_app:templates/mytemplate.jinja2'
)
def my_bad_home1(request):
    try:
        query = request.dbsession.query(models.MyModel)
        one = query.filter(models.MyModel.name == 'one').one()
    except SQLAlchemyError:
        return Response("Database error", content_type='text/plain', status=500)
    return {'one': one, 'project': 'my_proj'}