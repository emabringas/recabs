Import ('env')

# Concrete implementation for RecAbs
AddOption(
    '--implementation',
    dest='implementation',
    action='store',
    type='string',
    default="fud",
    help='Specifies the underlying implementation for RecAbs. Default is FuD.'
)
# Implementation options
implementations = ['fud', 'prototype']

# Check if implementation option is OK
if not env.GetOption('implementation') in implementations:
    print 'Error: the concrete implementation chosen does not exist !!\nYou have to choose one of these:', implementations

# Object: FuD implementation for RecAbs client
inc = env.Dir('.')
src = env.Glob('src/client/fud/*.cpp')
deps = ['mili', 'fud_client']
env.CreateObject('recabs_client_fud', inc, src, deps)

# Object: FuD implementation for RecAbs server
inc = env.Dir('.')
src = env.Glob('src/server/fud/*.cpp')
deps = ['mili', 'fud_server']
env.CreateObject('recabs_server_fud', inc, src, deps)

# Object: Prototype implementation for RecAbs client
inc = env.Dir('.')
src = env.Glob('src/client/prototype/*.cpp')
deps = []
env.CreateObject('recabs_client_prototype', inc, src, deps)

# Object: Prototype implementation for RecAbs server
inc = env.Dir('.')
src = env.Glob('src/server/prototype/*.cpp')
deps = []
env.CreateObject('recabs_server_prototype', inc, src, deps)

# SharedLibrary: RecAbs client
inc = env.Dir('.')
ext_inc = []
src = env.Glob('src/client/*.cpp')
deps = ['mili', 'recabs_client_' + env.GetOption('implementation')]
env.CreateSharedLibrary('recabs_client', inc, ext_inc, src, deps)

# SharedLibrary: RecAbs server
inc = env.Dir('.')
ext_inc = []
src = env.Glob('src/server/*.cpp')
deps = ['mili', 'recabs_server_' + env.GetOption('implementation')]
env.CreateSharedLibrary('recabs_server', inc, ext_inc, src, deps)
