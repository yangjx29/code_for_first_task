def code_execution(request):
    if request.method == 'POST':
        first_name = request.POST.get('first_name', '')
        #BAD -- Allow user to define code to be run.
        code = "setname('%s')" % first_name
        globals()['exec'](code)