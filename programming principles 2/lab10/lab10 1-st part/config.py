from configparser import ConfigParser

def load_config(filename='C:\\Users\\Darya\\Documents\\programming-principles-2\\lab10\\lab10 1-st part\\database.ini', section='postgresql'):
    parser = ConfigParser()
    parser.read(filename)

    # get section, default to postgresql
    config = {}
    if parser.has_section(section):
        params = parser.items(section)
        print(params)
        if __name__ == '__main__':
            print("I'm the boss!")
        if __name__ == 'config':
            print("I'm not the boss...")
        print(__name__)
        for param in params:
            config[param[0]] = param[1]
    else:
        raise Exception('Section {0} not found in the {1} file'.format(section, filename))

    return config

if __name__ == '__main__':
    config = load_config()
    print(config)